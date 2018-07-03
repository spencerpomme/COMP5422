function z = Entropy(probs)
%entropy Calculate entropy
%   It's not the same as builtin 'entropy'.
%   When calculating shannon entropy, this is correct.
len = length(probs);
sum = 0;
for i = 1:len
    sum = sum + probs(i) * log2(1/probs(i));
end
z = sum;
end
